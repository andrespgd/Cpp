fn main() {
    let ptr = Box::new([0; 10]);
    // some code here
    // ...
    // ptr goes out of scope and the memory is automatically freed by Rust's ownership model
}

/*
In this example, the Box::new function is used to dynamically 
allocate memory for an array of integers and the memory is 
automatically freed when the variable ptr goes out of scope, 
thanks to Rust's ownership model.

It's important to notice that in Rust, the ptr variable ownership
is limited to the scope where it's defined, so it's not possible
to forget to free the memory since it's done automatically. 
This makes Rust less prone to memory errors, and it's one of the
reasons why it's considered a safer language than C++ 
in terms of memory management.
*/
