//Using FFT, We can multiply two polynomials of degree-bound n in time ‚.n lg n/, with both
// the input and output representations in coefficient form.
/*
Given the FFT, we have the following ‚.n lg n/-time procedure for multiplying
two polynomials A.x/ and B.x/ of degree-bound n, where the input and output
representations are in coefficient form. We assume that n is a power of 2; we can
always meet this requirement by adding high-order zero coefficients.
1. Double degree-bound: Create coefficient representations of A.x/ and B.x/ as
degree-bound 2n polynomials by adding n high-order zero coefficients to each.

2. Evaluate: Compute point-value representations of A.x/ and B.x/ of length 2n
by applying the FFT of order 2n on each polynomial. These representations
contain the values of the two polynomials at the .2n/th roots of unity.

3. Pointwise multiply: Compute a point-value representation for the polynomial
C.x/ D A.x/B.x/ by multiplying these values together pointwise. This repre-
sentation contains the value of C.x/ at each .2n/th root of unity.


4. Interpolate: Create the coefficient representation of the polynomial C.x/ by
applying the FFT on 2n point-value pairs to compute the inverse DFT.

Steps (1) and (3) take time ‚.n/, and steps (2) and (4) take time ‚.n lg n/. Thus,
once we show how to use the FFT, we will have proven the following.


*/