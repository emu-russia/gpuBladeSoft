unsigned int __usercall sub_6F772D30@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // eax@1
  int v3; // edx@3
  void *v4; // esi@4
  signed int v5; // edx@4
  signed int v6; // ecx@4
  signed int v7; // ebp@5
  signed int v8; // ebp@5
  signed int v9; // edi@7
  signed int v10; // edi@7
  unsigned int result; // eax@9
  int v12; // edx@12
  signed int v13; // edx@13
  int v14; // [sp+0h] [bp-1Ch]@6
  signed int v15; // [sp+4h] [bp-18h]@3
  int v16; // [sp+8h] [bp-14h]@1

  v1 = *(_DWORD *)a1;
  v16 = a1;
  v2 = *(_DWORD *)(a1 + 4);
  if ( v1 >= v2 )
  {
    v15 = 0;
    if ( v2 < -v1 )
    {
      v15 = -5898240;
      v12 = -v2;
      v2 = v1;
      v1 = v12;
    }
  }
  else
  {
    v1 = -v1;
    if ( v2 <= v1 )
    {
      v13 = -11796480;
      if ( v2 > 0 )
        v13 = 11796480;
      v2 = -v2;
      v15 = v13;
    }
    else
    {
      v3 = v1;
      v15 = 5898240;
      v1 = v2;
      v2 = v3;
    }
  }
  v4 = &unk_6FB55864;
  v5 = 1;
  v6 = 1;
  do
  {
    while ( 1 )
    {
      v14 = (v5 + v2) >> v6;
      if ( v2 <= 0 )
        break;
      v7 = v1 + v5;
      v15 += *((_DWORD *)v4 - 1);
      v5 *= 2;
      v4 = (char *)v4 + 4;
      v8 = v7 >> v6++;
      v2 -= v8;
      v1 += v14;
      if ( v6 == 23 )
        goto LABEL_8;
    }
    v9 = v1 + v5;
    v1 -= v14;
    v15 -= *((_DWORD *)v4 - 1);
    v5 *= 2;
    v4 = (char *)v4 + 4;
    v10 = v9 >> v6++;
    v2 += v10;
  }
  while ( v6 != 23 );
LABEL_8:
  if ( v15 < 0 )
    result = -((8 - v15) & 0xFFFFFFF0);
  else
    result = (v15 + 8) & 0xFFFFFFF0;
  *(_DWORD *)v16 = v1;
  *(_DWORD *)(v16 + 4) = result;
  return result;
}
