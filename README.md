# Embedding Julia

For the installed Julia installation, there is already a file `julia-config.jl` inside the installation folder. This script is used to generate all the cflags and ldflags for compilation with C.

Check out JIT here.

```
/Applications/Julia-0.6.app/Contents/Resources/julia/share/julia/julia-config.jl --cflags --ldflags --ldlibs | xargs gcc simplejl.c
```