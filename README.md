# Reverse Engineering Analysis

R.E Analysis of LLM generated code.

- `claude-code.c` : sample generated using **claude-sonnet-4.5**

- `gemini-code.c` : sample generated using **gemini-2.5-flash**

## Compilation

Compilation was done using `gcc` with different levels of obfuscation:

- `v1` : no optimization

```
gcc -O0 -o program program.c
```

- `v3` : aggressive optimization

```
gcc -O3 -fomit-frame-pointer -s -o program program.c
```

## Reverse engineering

Performed using Ghidra. Pretty much decompilation of the binaries (`claude-compiled-v1`, `gemini-compiled-v1`, etc.) at default settings of ghidra.
And exporting the decompiled code in C/C++ format in the `/decompiled/` directory.
