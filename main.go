package main

import "fmt"

func main() {
	height := 8
	length := 12
	width := 10
	volume := height * length * width
	fmt.Printf("尺寸: height: %d, length: %d, width: %d\n", height, length, width)
	fmt.Println("volume: ", volume)
	fmt.Println("weight: ", (volume+165)/166)
}
