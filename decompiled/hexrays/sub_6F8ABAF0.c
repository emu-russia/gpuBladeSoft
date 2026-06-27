int __usercall sub_6F8ABAF0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebp@1
  char *v4; // edi@2
  char *v5; // eax@2
  char v6; // bp@3
  int v7; // esi@3
  char v9; // [sp+Ch] [bp-20h]@2
  char v10; // [sp+Dh] [bp-1Fh]@2

  *(_DWORD *)(a3 + 12) = -1;
  v3 = *(_DWORD *)(a3 + 4);
  if ( a1 )
  {
    v9 = 45;
    v4 = &v10;
    v5 = &v9;
  }
  else if ( v3 & 0x100 )
  {
    v9 = 43;
    v4 = &v10;
    v5 = &v9;
  }
  else if ( v3 & 0x40 )
  {
    v9 = 32;
    v4 = &v10;
    v5 = &v9;
  }
  else
  {
    v5 = &v9;
    v4 = &v9;
  }
  v6 = v3 & 0x20;
  v7 = 0;
  do
  {
    v4[v7] = v6 | *(_BYTE *)(a2 + v7) & 0xDF;
    ++v7;
  }
  while ( v7 != 3 );
  return sub_6F8AB9D0((int)v5, v4 + 3 - v5, a3);
}
