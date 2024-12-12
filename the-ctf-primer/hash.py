from hashlib import sha256

str = "test_string"
print(sha256(str.encode('utf-8')).hexdigest())
