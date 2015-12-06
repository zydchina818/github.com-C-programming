// Show how to declare a tage named complex for a structure with two members, real
// and imaginary, of type double. 

struct complex {
	double real, imaginary;
};

// Use the complex tag to declare variables named c1, c2 and c3.

struct complex c1, c2, c3;

// Write a function named make_complex that stores its two arguments
// (both of type double) in a complex structure, then returns the structure.

struct complex make_complex (double real, double imaginary)
{
	struct complex c;
	
	c.real = real;
	c.imaginary = imaginary;
	
	return c;
}

// Write a function named add_complex that adds the corresponding members of its
// arguments (both complex structures), then returns the result (another complex structure).

struct complex add_complex (struct complex c1, struct complex c2)
{
	struct complex c3;
	
	c3.real = c1.real + c2.real;
	c3.imaginary = c1.imaginary + c2.imaginary;
	
	return c3;
}

