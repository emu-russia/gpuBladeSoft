int __cdecl sub_6F961D10(int a1)
{
  _DWORD *v1; // edx@1
  int v2; // ebx@2
  char v4; // [sp+1Ch] [bp-40h]@1
  int v5; // [sp+20h] [bp-3Ch]@3
  int (__cdecl *v6)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  char *v7; // [sp+38h] [bp-24h]@1

  v6 = sub_6F962A50;
  v7 = byte_6F96A9E9;
  sub_6F8A1A60((int *)&v4);
  v1 = malloc(a1 + 96);
  if ( !v1 )
  {
    v5 = 0;
    sub_6F8B8F60();
    v1 = (_DWORD *)(a1 + 96);
    if ( a1 == -96 )
      sub_6F95D3C0();
  }
  *v1 = 0;
  v1[23] = 0;
  v2 = (int)(v1 + 24);
  memset(
    (void *)((unsigned int)(v1 + 1) & 0xFFFFFFFC),
    0,
    4 * (((unsigned int)v1 + -((unsigned int)(v1 + 1) & 0xFFFFFFFC) + 96) >> 2));
  sub_6F8A1AD0((int *)&v4);
  return v2;
}
