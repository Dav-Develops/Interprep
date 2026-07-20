#!/usr/bin/env python3
import sys
import subprocess

def main():
    prompt = " ".join(sys.argv[1:]) if len(sys.argv) > 1 else "Hello from Python"
    cmd = ["ollama", "run", "Andycurrent_Gemma_3B_4.7", "--no-stream", prompt]
    try:
        proc = subprocess.run(cmd, capture_output=True, text=True)
    except FileNotFoundError:
        print("Error: 'ollama' CLI not found. Install Ollama from https://ollama.com/", file=sys.stderr)
        sys.exit(2)

    if proc.stdout:
        print(proc.stdout)
    if proc.returncode != 0:
        print(proc.stderr, file=sys.stderr)
        sys.exit(proc.returncode)

if __name__ == '__main__':
    main()
