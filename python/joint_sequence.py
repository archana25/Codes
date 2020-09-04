




def compute_sequence(seq):
	str_seq = str(seq)
	seq_list = [char for char in str_seq]
	int_seq = [int(char) for char in seq_list]
	sum =0
	for num in int_seq:
		sum+=num
	sum+=seq
	return sum

def compute_join():

	s1 =  471
	s2 =  480
	list_s1 = [s1]
	while(True):
		next_seq = compute_sequence(s1)

		list_s1.append(next_seq)
		next_seq_2 = compute_sequence(s2)
		if next_seq_2 in list_s1:
			return next_seq_2
		if next_seq_2 > 2000000:
			return -1
		s1 = next_seq
		s2 = next_seq_2




if __name__ == "__main__":
	joint = compute_join()
	print(joint)
