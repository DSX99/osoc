
hex_string = ""
with open("code", "r") as f:
    for line in f:
        # print(int(line[2:], base=16))
        # print(int(line[2:], base=16).to_bytes(4,'little').hex())
        hex_string += int(line[2:], base=16).to_bytes(4,'little').hex()


hex_string = hex_string.replace(" ", "").replace("0x", "")

# Convert to raw bytes and write to a .bin file
with open("codes.bin", "wb") as f:
    f.write(bytes.fromhex(hex_string))