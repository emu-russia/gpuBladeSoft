int __usercall sub_6F8AC430@<eax>(int a1@<eax>, char *a2@<edx>, int a3@<ecx>, int a4)
{
  int v4; // ebx@1
  bool v5; // zf@1
  int v6; // ecx@1
  signed int v7; // ebx@1
  signed int v8; // eax@3
  int v9; // ecx@5
  int v10; // eax@7
  int v11; // edx@9
  __int64 v13; // [sp+10h] [bp-2Ch]@1
  int v14; // [sp+1Ch] [bp-20h]@1

  v14 = a1;
  v13 = a3 - 1;
  v4 = (a3 - 1) >> 31;
  v6 = (a3 - 1) / 10;
  v5 = (signed int)((unsigned __int64)(1717986919 * v13) >> 32) >> 2 == v4;
  v7 = 1;
  if ( !v5 )
  {
    do
    {
      ++v7;
      v6 /= 10;
    }
    while ( v6 );
  }
  v8 = *(_DWORD *)(a4 + 40);
  if ( v8 == -1 )
  {
    *(_DWORD *)(a4 + 40) = 2;
    v8 = 2;
  }
  v9 = *(_DWORD *)(a4 + 8);
  if ( v8 >= v7 )
    v7 = v8;
  v10 = v9 - (v7 + 2);
  if ( v9 <= v7 + 2 )
    v10 = -1;
  *(_DWORD *)(a4 + 8) = v10;
  sub_6F8ABC80(v14, a2, 1, a4);
  *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 40);
  v11 = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(a4 + 4) = v11 | 0x1C0;
  sub_6F8AB850(v11 & 0x20 | 0x45, a4);
  *(_DWORD *)(a4 + 8) += v7 + 1;
  return sub_6F8AC0F0(v13, SHIDWORD(v13), a4);
}
