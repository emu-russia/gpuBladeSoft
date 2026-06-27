signed int __thiscall sub_6F8BB1D0(void *this, int a2, int *a3)
{
  int v3; // eax@1
  int v4; // edx@1
  signed int result; // eax@1
  int v6; // [sp+10h] [bp-1Ch]@1
  int v7; // [sp+14h] [bp-18h]@1
  int v8; // [sp+18h] [bp-14h]@1
  int v9; // [sp+1Ch] [bp-10h]@1

  v3 = *(_DWORD *)this;
  v6 = 0;
  v4 = *a3;
  v7 = 0;
  v8 = 16;
  v9 = 0;
  (*(void (__stdcall **)(int, int, int *))(v3 + 24))(a2, v4, &v6);
  result = 0;
  if ( (v7 & 6) == 6 )
  {
    *a3 = v6;
    result = 1;
  }
  return result;
}
