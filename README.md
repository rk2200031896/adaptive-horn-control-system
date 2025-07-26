# Adaptive Horn Control System Based on GPS Zones

An innovative embedded system project that smartly controls a vehicle’s horn based on real-time location. This project aims to reduce noise pollution by auto-regulating horn usage within silence zones such as hospitals, schools, and residential areas.

## Technologies Used
- Raspberry Pi (Python)
- Arduino (C++)
- GPS Module (Neo-6M)
- CAN Bus Transceivers
- Embedded C
- Python
- KiCad (for circuit design)
- Git & GitHub

## Project Structure
adaptive-horn-control-system/
│
├── README.md
├── circuit-diagram/
├── hardware/
├── code/
│ ├── raspberry_pi/
│ └── arduino/
├── docs/
├── videos/
└── LICENSE


## How It Works
1. GPS module fetches real-time location.
2. Raspberry Pi checks if vehicle is entering a pre-marked silent zone.
3. If true, it sends command over CAN bus to disable horn.
4. Exiting the zone re-enables horn automatically.

## Target Applications
- Automobiles near Hospitals/Schools
- Smart City Vehicle Integrations
- Noise-Sensitive Autonomous Zones

## License
This project is licensed under the MIT License.



