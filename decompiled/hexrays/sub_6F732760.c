int sub_6F732760()
{
  int *v0; // eax@1
  int *v1; // ebx@2
  int *v2; // edx@3
  int *v3; // ebx@4
  int *v4; // ecx@5
  int *v5; // ebx@6
  int result; // eax@7

  dword_70057F18 = sub_6F7617D0();
  v0 = (int *)dword_6FBBFDB8;
  if ( (int *)dword_6FBBFDB8 != &dword_6FBBFDB8 )
  {
    do
    {
      v1 = (int *)*v0;
      j_free_1(v0);
      v0 = v1;
    }
    while ( v1 != &dword_6FBBFDB8 );
  }
  v2 = (int *)dword_6FBBFDAC;
  dword_6FBBFDBC = (int)&dword_6FBBFDB8;
  dword_6FBBFDB8 = (int)&dword_6FBBFDB8;
  dword_6FBBFDC0 = 0;
  if ( (int *)dword_6FBBFDAC != &dword_6FBBFDAC )
  {
    do
    {
      v3 = (int *)*v2;
      j_free_1(v2);
      v2 = v3;
    }
    while ( v3 != &dword_6FBBFDAC );
  }
  v4 = (int *)dword_6FBBFDA0;
  dword_6FBBFDB0 = (int)&dword_6FBBFDAC;
  dword_6FBBFDAC = (int)&dword_6FBBFDAC;
  dword_6FBBFDB4 = 0;
  if ( (int *)dword_6FBBFDA0 != &dword_6FBBFDA0 )
  {
    do
    {
      v5 = (int *)*v4;
      j_free_1(v4);
      v4 = v5;
    }
    while ( v5 != &dword_6FBBFDA0 );
  }
  dword_6FBBFDA4 = (int)&dword_6FBBFDA0;
  result = 0;
  dword_6FBBFDA0 = (int)&dword_6FBBFDA0;
  dword_6FBBFDA8 = 0;
  return result;
}
