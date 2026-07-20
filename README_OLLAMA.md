# Ollama model: Andycurrent_Gemma_3B_4.7 — VS Code integration

Quick steps to configure and test the Ollama model locally from VS Code.

Prerequisites
- Install Ollama (https://ollama.com/) and ensure the `ollama` CLI is on your PATH.

Download the model
- Pull the model locally (if required) with:

```
ollama pull Andycurrent_Gemma_3B_4.7
```

Quick test from the workspace
- Run the CLI test task from VS Code: open the Command Palette → `Tasks: Run Task` → `Run Ollama CLI test`.
- Or run the Python helper script (requires Python on PATH):

```
python scripts/ollama_test.py "Hello from Python"
```

What I added
- [.vscode/tasks.json](.vscode/tasks.json) — VS Code tasks to run the model via CLI or Python.
- [scripts/ollama_test.py](scripts/ollama_test.py) — small helper that calls the `ollama` CLI.
- This file: [README_OLLAMA.md](README_OLLAMA.md) — usage notes and quick commands.

Notes
- If `ollama` is running as a service or uses a custom host/port, set environment variables or adjust the commands accordingly.
- If you want an extension-based experience, install any Ollama/AI completion extension and set it to use the local `ollama` endpoint.
