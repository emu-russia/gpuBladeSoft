_BYTE *__thiscall sub_6F90E3F0(_BYTE *this, const char *a2, char a3, int a4)
{
  unsigned int v4; // edx@1
  const char *v5; // eax@2
  _BYTE *result; // eax@4
  _BYTE *v7; // ebx@5
  FILE *v8; // eax@5

  v4 = (a3 & 0x3D) - 1;
  if ( v4 <= 0x3B
    && (v5 = (const char *)*(&off_6FBA7760 + v4)) != 0
    && !*(_DWORD *)this
    && (v7 = this, v8 = j_fopen(a2, v5), (*(_DWORD *)v7 = v8) != 0) )
  {
    v7[4] = 1;
    result = v7;
  }
  else
  {
    result = 0;
  }
  return result;
}
