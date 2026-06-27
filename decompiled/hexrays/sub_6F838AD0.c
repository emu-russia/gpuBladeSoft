unsigned int __cdecl sub_6F838AD0(int a1, signed int a2)
{
  signed int v2; // eax@6
  unsigned int result; // eax@8
  signed int v4; // eax@9
  signed int v5; // eax@10
  signed int v6; // eax@30
  signed int v7; // eax@34
  signed int v8; // eax@38
  signed int v9; // eax@39
  unsigned __int8 v10; // [sp+1Eh] [bp-Ah]@14
  char v11; // [sp+1Fh] [bp-9h]@21

  if ( *(_DWORD *)(a1 + 400) || *(_DWORD *)(a1 + 404) )
  {
    sub_6F839262(a1, "gamma table being rebuilt");
    sub_6F8388BE(a1);
  }
  if ( a2 > 8 )
  {
    if ( *(_BYTE *)(a1 + 343) & 2 )
    {
      v10 = *(_BYTE *)(a1 + 424);
      if ( *(_BYTE *)(a1 + 425) > v10 )
        v10 = *(_BYTE *)(a1 + 425);
      if ( *(_BYTE *)(a1 + 426) > v10 )
        v10 = *(_BYTE *)(a1 + 426);
    }
    else
    {
      v10 = *(_BYTE *)(a1 + 427);
    }
    if ( v10 && v10 <= 0xFu )
      v11 = 16 - v10;
    else
      v11 = 0;
    if ( *(_DWORD *)(a1 + 124) & 0x4000400 && (unsigned __int8)v11 <= 4u )
      v11 = 5;
    if ( (unsigned __int8)v11 > 8u )
      v11 = 8;
    *(_DWORD *)(a1 + 392) = (unsigned __int8)v11;
    if ( *(_DWORD *)(a1 + 124) & 0x4000400 )
    {
      if ( *(_DWORD *)(a1 + 396) <= 0 )
        v6 = 100000;
      else
        v6 = sub_6F838261(*(_DWORD *)(a1 + 732), *(_DWORD *)(a1 + 396));
      sub_6F83868A(a1, (int *)(a1 + 404), v11, v6);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 396) <= 0 )
        v7 = 100000;
      else
        v7 = sub_6F8382DD(*(_DWORD *)(a1 + 732), *(_DWORD *)(a1 + 396));
      sub_6F8384A3(a1, (int *)(a1 + 404), (unsigned __int8)v11, v7);
    }
    result = *(_DWORD *)(a1 + 124) & 0x600080;
    if ( result )
    {
      v8 = sub_6F8381D3(*(_DWORD *)(a1 + 732));
      sub_6F8384A3(a1, (int *)(a1 + 420), (unsigned __int8)v11, v8);
      if ( *(_DWORD *)(a1 + 396) <= 0 )
        v9 = *(_DWORD *)(a1 + 732);
      else
        v9 = sub_6F8381D3(*(_DWORD *)(a1 + 396));
      result = sub_6F8384A3(a1, (int *)(a1 + 416), (unsigned __int8)v11, v9);
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 396) <= 0 )
      v2 = 100000;
    else
      v2 = sub_6F8382DD(*(_DWORD *)(a1 + 732), *(_DWORD *)(a1 + 396));
    sub_6F838828(a1, (int *)(a1 + 400), v2);
    result = *(_DWORD *)(a1 + 124) & 0x600080;
    if ( result )
    {
      v4 = sub_6F8381D3(*(_DWORD *)(a1 + 732));
      sub_6F838828(a1, (int *)(a1 + 412), v4);
      if ( *(_DWORD *)(a1 + 396) <= 0 )
        v5 = *(_DWORD *)(a1 + 732);
      else
        v5 = sub_6F8381D3(*(_DWORD *)(a1 + 396));
      result = sub_6F838828(a1, (int *)(a1 + 408), v5);
    }
  }
  return result;
}
