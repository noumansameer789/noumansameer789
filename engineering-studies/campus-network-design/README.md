# Campus network infrastructure design

Portfolio documentation for a departmental Cisco Packet Tracer design using
VLAN segmentation, structured subnetting, inter-VLAN routing, bandwidth policy
and access-port security.

## Design goals

- isolate student, staff, lab, server and management traffic
- make address allocation auditable and expandable
- restrict access ports and management planes by default
- document verification commands and failure scenarios

The original `.pkt` file is not included. `configs/switch-template.txt` is a
vendor-style teaching template and must be adapted to the actual topology before
use.
