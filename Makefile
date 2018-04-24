hello:
	/Applications/Julia-0.6.app/Contents/Resources/julia/share/julia/julia-config.jl --cflags --ldflags --ldlibs | xargs gcc simplejl.c
