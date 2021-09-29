# xjson

The simplest JSON library for Python. Performances are decent.

It exposes two functions:

```python
from xjson import dumps, loads

# Dump JSON-like object to string
dumps({"Hello": "World"})

# Load JSON string into Python object
loads('[1, 2, 3]')
```
