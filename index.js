function main() {
  let height = 8
  let length = 12
  let width = 10

  let volume = height * length * width
  let weight = Math.floor((volume + 165) / 166)
  console.log("height: %d, length: %d, width: %d\n", height, length, width)
  console.log("volume: %d\n", volume)
  console.log("weight: %d", weight)
}

main()
