
use std::io;

fn setup() {
    let mut is_hard: bool = false;

    let mut people = String::new();
    io::stdin()
        .read_line(&mut people)
        .expect("Failed to read line");

    let people: i32 = match people.trim().parse() {
        Ok(num) => num,
        Err(_) => 0,
    };

    // Input Need to be fixed
    for _ in 0..people {
        let mut feedback = String::new();
        io::stdin()
            .read_line(&mut feedback)
            .expect("Failed to read line");

        let feedback = match feedback.trim().parse() {
            Ok(numa) => numa,
            Err(_) => 0
        };

        if feedback == 1 {
            is_hard = true;
            break;
        }
    }

    match is_hard {
        true => println!("HARD"),
        false => println!("Easy")
    }
}