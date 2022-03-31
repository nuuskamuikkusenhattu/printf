for b_files in ft_strstr.c ft_strnstr.c ft_strncmp.c ft_strcmp.c
do
if grep -q -E "(const char.*){2}" $b_files; then
	echo $b_files": OK"
else
	echo $b_files" contains parameter-error"
fi
done