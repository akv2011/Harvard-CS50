#importing whole library
import sys

if len(sys.argv) !=2:
    print("Missing command line Argument")
    sys.ext(1)

print(f"hello,{sys.argv[1]}")
sys.exit(0)
