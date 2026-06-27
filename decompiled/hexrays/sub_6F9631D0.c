int sub_6F9631D0()
{
  int result; // eax@2
  char v1; // [sp+1Ch] [bp-40h]@1
  int v2; // [sp+20h] [bp-3Ch]@3
  int (__cdecl *v3)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v4; // [sp+38h] [bp-24h]@1

  v3 = sub_6F962A50;
  v4 = &dword_6F96CB44;
  sub_6F8A1A60((int *)&v1);
  if ( byte_6FB48C4C )
  {
    v2 = 0;
    sub_6F8B47F0(dword_6FB48C48);
    result = sub_6F8A1AD0((int *)&v1);
  }
  else
  {
    result = sub_6F8A1AD0((int *)&v1);
  }
  return result;
}
