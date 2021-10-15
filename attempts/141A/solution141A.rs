use std::io;
use std::collections::HashMap;

fn main() {
    let mut name = String::new();
    let mut host = String::new();
    let mut scramble = String::new();
    io::stdin().read_line(&mut name).expect("Error reading");
    io::stdin().read_line(&mut host).expect("Error reading");
    io::stdin().read_line(&mut scramble).expect("Error reading");
    let name = name.trim_end();
    let host = host.trim_end();
    let scramble = scramble.trim_end();
    
    let name_host_map = {
        let mut name_host_map: HashMap<char, i32> = HashMap::new();

        for (_, c) in name.chars().enumerate() {
            let i = match name_host_map.get(&c) {
                Some(prev) => prev + 1,
                None => 0
            };

            name_host_map.insert(c, i);
        }

        for (_, c) in host.chars().enumerate() {
            let i = match name_host_map.get(&c) {
                Some(prev) => prev + 1,
                None => 0
            };

            name_host_map.insert(c, i);
        }

        name_host_map
    };

    let scramble_map = {
        let mut scramble_map: HashMap<char, i32> = HashMap::new();

        for (_, c) in scramble.chars().enumerate() {
            let i = match scramble_map.get(&c) {
                Some(prev) => prev + 1,
                None => 0
            };

            scramble_map.insert(c, i);
        }

        scramble_map
    };

    if scramble_map.len() != name_host_map.len() {
        println!("NO: len no eq");
        return;
    }

    for (k, this) in &name_host_map {
        let that = match scramble_map.get(&k) {
            Some(val) => val,
            None => {
                println!("NO: unlikely");
                return;
            }
        };
        if this != that {
            println!("NO: number not eq");
            return;
        }
    }

    println!("YES");
}
