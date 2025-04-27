def main():
    height: int = 8
    length: int = 12
    width: int = 10
    volume: int = height * length * width
    weight: int = (volume + 165) // 166
    print(f"height: {height}, length: {length}, width: {width}")
    print(f"volume: {volume}")
    print(f"weight: {weight}")


main()
