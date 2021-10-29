LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY FULLADDER IS
    PORT (
        A  : IN STD_LOGIC;
        B  : IN STD_LOGIC;
        CI : IN STD_LOGIC;
        S  : OUT STD_LOGIC;
        CO : OUT STD_LOGIC);
END FULLADDER;

ARCHITECTURE FA OF FULLADDER IS
    SIGNAL SH : STD_LOGIC;
    SIGNAL CH : STD_LOGIC;
BEGIN
    SH <= A XOR B;
    CH <= A AND B;
    S  <= SH XOR CI;
    CO <= (SH AND CI) OR CH;
END FA;