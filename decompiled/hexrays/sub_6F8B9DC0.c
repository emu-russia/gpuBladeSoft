int __cdecl sub_6F8B9DC0(void *a1, unsigned int a2)
{
  unsigned int v2; // ecx@1
  void *v3; // esp@1
  unsigned int v4; // ebx@1
  int v5; // edi@4
  char v7; // [sp+0h] [bp-38h]@0
  unsigned int v8; // [sp+18h] [bp-20h]@1
  int v9; // [sp+18h] [bp-20h]@5
  unsigned int v10; // [sp+1Ch] [bp-1Ch]@1

  sub_6F8A13B0(0x20u, v7);
  v3 = alloca(32);
  v8 = ((unsigned int)&v8 + 3) & 0xFFFFFFF0;
  v10 = (((unsigned int)&v8 + 3) & 0xFFFFFFF0) + 12;
  v4 = (((unsigned int)&v8 + 3) & 0xFFFFFFF0) + 12;
  while ( 1 )
  {
    *(_BYTE *)--v4 = byte_6FBA6285[v2 % 0xA];
    if ( v2 <= 9 )
      break;
    v2 /= 0xAu;
  }
  v5 = v10 - v4;
  if ( v10 - v4 > a2 )
    v5 = -1;
  else
    memcpy(a1, (const void *)(v9 - v5 + 12), v10 - v4);
  return v5;
}
