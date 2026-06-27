int __cdecl sub_6F83962E(int a1, int a2, int a3)
{
  int v3; // eax@6
  int v4; // ST1C_4@6
  int v5; // eax@6
  int v6; // eax@6
  int v7; // eax@7
  int result; // eax@10
  int v9; // eax@11
  int v10; // eax@12
  _BYTE *v11; // ecx@12
  signed int v12; // eax@12
  signed int v13; // [sp+Ch] [bp-14h]@2
  unsigned int v14; // [sp+10h] [bp-10h]@1
  signed int v15; // [sp+14h] [bp-Ch]@11
  signed int v16; // [sp+18h] [bp-8h]@1
  int v17; // [sp+1Ch] [bp-4h]@1
  int v18; // [sp+1Ch] [bp-4h]@11

  v14 = *(_DWORD *)(a1 + 284);
  v17 = 0;
  v16 = 24;
  while ( v16 >= 0 )
  {
    v13 = (unsigned __int8)(v14 >> v16);
    v16 -= 8;
    if ( v13 > 64 && v13 <= 122 && (v13 <= 90 || v13 > 96) )
    {
      v7 = v17++;
      *(_BYTE *)(a2 + v7) = v13;
    }
    else
    {
      v3 = v17;
      v4 = v17 + 1;
      *(_BYTE *)(v3 + a2) = 91;
      v5 = v4++;
      *(_BYTE *)(a2 + v5) = byte_6FB99978[(v13 & 0xF0) >> 4];
      *(_BYTE *)(a2 + v4) = byte_6FB99978[v13 & 0xF];
      v6 = v4 + 1;
      v17 = v4 + 2;
      *(_BYTE *)(v6 + a2) = 93;
    }
  }
  if ( a3 )
  {
    v15 = 0;
    *(_BYTE *)(v17 + a2) = 58;
    v9 = v17 + 1;
    v18 = v17 + 2;
    *(_BYTE *)(v9 + a2) = 32;
    while ( v15 <= 194 && *(_BYTE *)(v15 + a3) )
    {
      v10 = v18++;
      v11 = (_BYTE *)(v10 + a2);
      v12 = v15++;
      *v11 = *(_BYTE *)(v12 + a3);
    }
    result = v18 + a2;
    *(_BYTE *)(v18 + a2) = 0;
  }
  else
  {
    result = v17 + a2;
    *(_BYTE *)(v17 + a2) = 0;
  }
  return result;
}
