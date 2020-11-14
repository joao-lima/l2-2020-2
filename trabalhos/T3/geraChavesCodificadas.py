#!/usr/bin/python

import hashlib
import random

words = open('words.txt').read().splitlines()

original = []
for i in range(10):
    a = random.choice(words)
    hash = hashlib.md5(a.encode())
    original.append(hash.hexdigest())
    
codificado = []    
for l in original:
    n = random.randint(1,11)
    novo = l
    for i in range(n):
        pos = random.randrange(len(l))
        cmd = random.choice(['<', '>'])
        novo = novo[:pos] + cmd + novo[pos:]
    c = random.choice(['^', '@', '', '', ''])
    pos = random.randrange(len(l))
    novo = novo[:pos] + c + novo[pos:]
    codificado.append(novo)

for i in codificado:
    print(i)
