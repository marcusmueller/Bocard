Test all integers up to n for n!+1=m^2 , m \in \mathbb N.

Needs GNU GMP.

Building
========

make

That's all, folks.

Running
=======

./bocard max_n

tests all integers up to max_n.

max_n should be smaller than UINT64_MAX, but frankly, I never had the time to test with max_n>20,000 .
