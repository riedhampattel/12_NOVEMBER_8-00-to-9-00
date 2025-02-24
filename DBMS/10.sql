BEGIN
	DBMS_OUTPUT.PUT('HELLO WORLD!');
	DBMS_OUTPUT.PUT_LINE('HOW ARE YOU?');
END;

BEGIN
	DBMS_OUTPUT.PUT('A ');
	DBMS_OUTPUT.PUT_LINE('B');
	DBMS_OUTPUT.PUT('C ');
	DBMS_OUTPUT.PUT('D');
	DBMS_OUTPUT.PUT_LINE(' ');
END;

DECLARE
	X NUMBER := 10;
	Y VARCHAR(20) := 'tops';
	Z FLOAT := 56.23;
BEGIN
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF X = '||X);
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF Y = '||Y);
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF Z = '||Z);
END;

DECLARE -- FIRST BLOCK
	X NUMBER := 10;
BEGIN
	DECLARE -- SECOND BLOCK
		Y NUMBER := 20;
	BEGIN
		DECLARE -- THIRD BLOCK
			Z NUMBER := 30;
		BEGIN
			DBMS_OUTPUT.PUT_LINE('THIRD BLOCK :');
			DBMS_OUTPUT.PUT_LINE('THE VALUE OF X = '||X);
			DBMS_OUTPUT.PUT_LINE('THE VALUE OF Y = '||Y);
			DBMS_OUTPUT.PUT_LINE('THE VALUE OF Z = '||Z);
		END; -- THIRD BLOCK
		DBMS_OUTPUT.PUT_LINE('SECOND BLOCK :');
		DBMS_OUTPUT.PUT_LINE('THE VALUE OF X = '||X);
		DBMS_OUTPUT.PUT_LINE('THE VALUE OF Y = '||Y);
	END; -- SECOND BLOCK
	DBMS_OUTPUT.PUT_LINE('FIRST BLOCK :');
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF X = '||X);
END; -- FIRST BLOCK

-- CONDITIONAL STATEMENTS
DECLARE
	NUM NUMBER := 1;
BEGIN
	IF MOD(NUM,2)=0 THEN
		DBMS_OUTPUT.PUT_LINE(NUM||' IS AN EVEN NUMBER');
	ELSE
		DBMS_OUTPUT.PUT_LINE(NUM||' IS AN ODD NUMBER');
	END IF;
END;

DECLARE
	N1 NUMBER := 45;
	N2 NUMBER := 105;
	N3 NUMBER := 85;
BEGIN
	IF N1>N2 AND N1>N3 THEN
		DBMS_OUTPUT.PUT_LINE(N1||' IS THE BIGGEST NUMBER');
	ELSIF N2>N1 AND N2>N3 THEN
		DBMS_OUTPUT.PUT_LINE(N2||' IS THE BIGGEST NUMBER');
	ELSE
		DBMS_OUTPUT.PUT_LINE(N3||' IS THE BIGGEST NUMBER');
	END IF;
END;

DECLARE
	N1 NUMBER := 45;
	N2 NUMBER := 95;
	N3 NUMBER := 85;
BEGIN
	IF N1>N2 THEN
		IF N1>N3 THEN
			DBMS_OUTPUT.PUT_LINE(N1||' IS THE BIGGEST NUMBER');
		ELSE
			DBMS_OUTPUT.PUT_LINE(N3||' IS THE BIGGEST NUMBER');
		END IF;
	ELSE
		IF N2>N3 THEN
			DBMS_OUTPUT.PUT_LINE(N2||' IS THE BIGGEST NUMBER');
		ELSE
			DBMS_OUTPUT.PUT_LINE(N3||' IS THE BIGGEST NUMBER');
		END IF;
	END IF;
END;

-- SIMPLE LOOP
DECLARE
	I NUMBER := 1;
BEGIN
	LOOP
		DBMS_OUTPUT.PUT_LINE('TOPS TECHNOLOGIES'); --4
		IF I=5 THEN
            EXIT;
		END IF;
		I := I + 1;
	END LOOP;
END;

-- SIMPLE LOOP
DECLARE
	I NUMBER := 1;
BEGIN
	LOOP
		DBMS_OUTPUT.PUT_LINE('TOPS TECHNOLOGIES'); --4
		EXIT WHEN I=5;
		I := I + 1;
	END LOOP;
END;

-- FOR LOOP
BEGIN
	FOR X IN 1..5 LOOP
		DBMS_OUTPUT.PUT_LINE(X||'. TOPS TECHNOLOGIES');
	END LOOP;
END;

-- FOR LOOP
DECLARE
	X NUMBER := 101;
BEGIN
	FOR Y IN 1..5 LOOP
		DBMS_OUTPUT.PUT_LINE(X||'. TOPS TECHNOLOGIES');
		X := X+1;
	END LOOP;
END;

-- WHILE LOOP
DECLARE 
	I NUMBER := 1;
BEGIN
	WHILE I<=5 LOOP
		DBMS_OUTPUT.PUT_LINE('TOPS TECHNOLOGIES');
		I := I+1;
	END LOOP;
END;