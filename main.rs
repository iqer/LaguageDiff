fn main() {
    let height = 8;
    let length = 12;
    let width = 10;

    let volume = height * length * width;
    let weigth = (volume + 165) / 166;

    println!("height:{}, length: {}, width: {}", height, length, width);
    println!("volume: {}", volume);
    println!("weight: {}", weigth);
}
