ctags -x *.c | cut -d$'\t' -f2 >> prototypes.txt

#a_files contain exactly one 'const char' in main prototype
for a_files in 
#b_files contain exactly two 'const char's in main prototype
for b_files in
#c_files contain exactly one 'char const' in main prototype
for c_files in