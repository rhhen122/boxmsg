# BoxMSG
```
+-----------------+
|  Hello, World!  |
+-----------------+
```
```bash
$ make
$ box -random
+------------------------------------------+
|  Build a server and document Wikipedia!  |
+------------------------------------------+
```
`BoxMSG` is a simple `C` program that returns a box along with the user provided input
## Usage
```bash
./box "Hello, World!"
```
For `help`:
```bash
./box -help
```
Or for a `"random"` output:
```bash
./box -random
```
## Install / Uninstall
For base version:
```bash
make
```
For mini version:
```bash
make mini
```
Uninstall (Clean):
```
make clean
```
## Caveats
 - Max char input (Fuck you C) 1000 char
 - Multiline support (Implement it yourself)
 - FORMATTING ISSUES DONT FEED IT INTO FZF OR SOME CRAP
