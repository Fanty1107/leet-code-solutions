
fn plus_one(mut digits: Vec<i32>) -> Vec<i32>
{
    for i in (0..digits.len()).rev(){
        if digits[i] < 9{
            digits[i] += 1;
            return digits;
        }
        digits[i] = 0;
    }
    digits.insert(0, 1);
    digits
}


fn main() {
    let v = vec![1,2,8,6,6,0,8,6,1,9];
    let result = plus_one(v);
    println!("{:?}", result);
}
