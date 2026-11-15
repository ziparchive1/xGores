# xGores Open Source Project
# xGores is still on beta and may have some errors
***xGores*** OpenGores fork for ddnet 20+ & Stun support [ https://github.com/ddnet/ddnet/pull/13036  ]
 
* [DDNet](https://github.com/ddnet/ddnet) — Official DDNet repository.
* [Teeworlds](https://github.com/teeworlds/teeworlds) — Original Teeworlds repository.
* [OpenGores](https://github.com/teemods/opengores) — Original mod/project.

---

## Dependencies

cmake make gcc git pkgconf cargo rust

### Instalation and Compilation:


`git clone https://github.com/ziparchive1/xGores.git`

Config:

`mkdir build && cd build && cmake -DCLIENT=OFF ..`

Compilation:

`cmake --build -j$(nproc) .`

---

# STUN Support:

just add 

`sv_stun_server stun.l.google.com:19302` into data/autoexec_server.cfg

# Done! Thanks

For help:

DS-m1rxx11org
or
https://bit.ly/xx11org-bio

