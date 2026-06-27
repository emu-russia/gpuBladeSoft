signed int __cdecl sub_6F84E4F4(int a1, size_t a2)
{
  signed int result; // eax@12
  size_t v3; // [sp+1Ch] [bp-Ch]@1

  v3 = -1;
  if ( *(_DWORD *)(a1 + 680) )
  {
    sub_6F83B5A7(a1, *(_DWORD *)(a1 + 680));
    *(_DWORD *)(a1 + 680) = 0;
  }
  if ( *(_DWORD *)(a1 + 668) && *(_DWORD *)(a1 + 668) < 0xFFFFFFFF )
    v3 = *(_DWORD *)(a1 + 668);
  if ( a2 <= v3 )
  {
    *(_BYTE *)(a1 + 672) = *(_DWORD *)(a1 + 284) >> 24;
    *(_BYTE *)(a1 + 673) = *(_DWORD *)(a1 + 284) >> 16;
    *(_BYTE *)(a1 + 674) = *(_WORD *)(a1 + 284) >> 8;
    *(_BYTE *)(a1 + 675) = *(_DWORD *)(a1 + 284);
    *(_BYTE *)(a1 + 676) = 0;
    *(_DWORD *)(a1 + 684) = a2;
    *(_BYTE *)(a1 + 688) = *(_DWORD *)(a1 + 116);
    if ( a2 )
      *(_DWORD *)(a1 + 680) = sub_6F83B561(a1, a2);
    else
      *(_DWORD *)(a1 + 680) = 0;
  }
  if ( *(_DWORD *)(a1 + 680) || !a2 )
  {
    if ( a2 )
      sub_6F84A73A(a1, *(_DWORD *)(a1 + 680), a2);
    sub_6F84A77C(a1, 0);
    result = 1;
  }
  else
  {
    sub_6F84A77C(a1, a2);
    sub_6F839842(a1, "unknown chunk exceeds memory limits");
    result = 0;
  }
  return result;
}
