const char *__cdecl sub_6F869B9C(int a1)
{
  _DWORD *v1; // ebx@1
  const char *result; // eax@3
  int v3; // eax@7
  int v4; // eax@2
  int v5; // [sp+18h] [bp-10h]@1
  char v6; // [sp+1Fh] [bp-9h]@4

  *(_DWORD *)(a1 + 4) = 0;
  v5 = sub_6F869D64();
  v1 = sub_6F869CF4(a1, 0x54u);
  if ( !v1 )
  {
    sub_6F869D6C();
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 56;
    *(_DWORD *)(v4 + 24) = 0;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  *v1 = sub_6F868FC4;
  v1[1] = sub_6F8696EC;
  v1[2] = sub_6F869890;
  v1[3] = sub_6F8697AC;
  v1[4] = sub_6F8691AC;
  v1[5] = sub_6F869134;
  v1[6] = sub_6F869970;
  v1[7] = sub_6F869558;
  v1[8] = sub_6F8693B8;
  v1[9] = sub_6F869224;
  v1[10] = sub_6F869360;
  v1[12] = 1000000000;
  v1[11] = v5;
  v1[14] = 0;
  v1[16] = 0;
  v1[13] = 0;
  v1[15] = 0;
  v1[17] = 0;
  v1[18] = 0;
  v1[19] = 84;
  *(_DWORD *)(a1 + 4) = v1;
  result = getenv("JPEGMEM");
  if ( result )
  {
    v6 = 120;
    result = (const char *)sscanf(result, "%ld%c", &v5, &v6);
    if ( (signed int)result > 0 )
    {
      if ( v6 == 109 || v6 == 77 )
        v3 = 1000 * v5;
      else
        v3 = v5;
      result = (const char *)(1000 * v3);
      v1[11] = result;
    }
  }
  return result;
}
