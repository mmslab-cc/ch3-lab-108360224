a1.out:
	gcc -finput-charset=BIG5 ch3-lab1/source/*

lab1: a1.out
	bash lab1.sh

a2-1.out:
	gcc -finput-charset=BIG5 ch3-lab2-1/source/*

lab2-1: a2-1.out
	bash lab2.sh

a2-2.out:
	gcc -finput-charset=BIG5 ch3-lab2-2/source/*

lab2-2: a2-2.out
	bash lab2.sh

# �bwindows���ҩ��U��docker container�~�ݭn����
convert:
	dos2unix *.sh