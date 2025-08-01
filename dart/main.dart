import 'package:flutter/material.dart';
import 'package:url_launcher/url_launcher.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Panic Button App',
      home: PanicButtonScreen(),
    );
  }
}

class PanicButtonScreen extends StatelessWidget {
  final String emergencyContact = '9064347556'; // Replace with an actual emergency contact number

  // Function to call
  void callEmergencyNumber() async {
    final Uri url = Uri(scheme: 'tel', path: emergencyContact);
    if (await canLaunch(url.toString())) {
      await launch(url.toString());
    } else {
      print('Could not launch $url');
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Panic Button App'),
        backgroundColor: Colors.red,
      ),
      body: Center(
        child: ElevatedButton(
          onPressed: () {
            callEmergencyNumber(); // Call the emergency contact
          },
          style: ElevatedButton.styleFrom(
            backgroundColor: Colors.red,
            padding: EdgeInsets.symmetric(horizontal: 50, vertical: 20),
            textStyle: TextStyle(fontSize: 24),
          ),
          child: Text('Emergency'),
        ),
      ),
    );
  }
}
