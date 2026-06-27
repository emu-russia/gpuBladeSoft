int __cdecl sub_6F84E697(int a1, int a2, size_t a3)
{
  unsigned int v3; // eax@25
  int result; // eax@33
  int v5; // [sp+14h] [bp-14h]@3
  signed int v6; // [sp+18h] [bp-10h]@1
  int v7; // [sp+1Ch] [bp-Ch]@1

  v6 = 0;
  v7 = sub_6F834CDB(a1, *(_DWORD *)(a1 + 284));
  if ( *(_DWORD *)(a1 + 592) )
  {
    if ( sub_6F84E4F4(a1, a3) )
    {
      v5 = (*(int (__cdecl **)(int, int))(a1 + 592))(a1, a1 + 672);
      if ( v5 < 0 )
        sub_6F83979A(a1, (int)"error in user chunk");
      if ( v5 )
      {
        v6 = 1;
        v7 = 1;
      }
      else if ( v7 <= 1 )
      {
        if ( *(_DWORD *)(a1 + 596) <= 1 )
        {
          sub_6F8397EC(a1, "Saving unknown chunk:");
          sub_6F8395B4(a1, "forcing save of an unhandled chunk; please call png_set_keep_unknown_chunks");
        }
        v7 = 2;
      }
    }
    else
    {
      v7 = 1;
    }
  }
  else
  {
    if ( !v7 )
      v7 = *(_DWORD *)(a1 + 596);
    if ( v7 == 3 || v7 == 2 && *(_DWORD *)(a1 + 284) & 0x20000000 )
    {
      if ( !sub_6F84E4F4(a1, a3) )
        v7 = 1;
    }
    else
    {
      sub_6F84A77C(a1, a3);
    }
  }
  if ( v7 == 3 || v7 == 2 && *(_DWORD *)(a1 + 284) & 0x20000000 )
  {
    v3 = *(_DWORD *)(a1 + 664);
    if ( v3 != 1 )
    {
      if ( v3 >= 1 )
      {
        if ( v3 == 2 )
        {
          *(_DWORD *)(a1 + 664) = 1;
          sub_6F839842(a1, "no space in chunk cache");
          goto LABEL_31;
        }
        --*(_DWORD *)(a1 + 664);
      }
      sub_6F8524B1(a1, a2, a1 + 672, 1);
      v6 = 1;
    }
  }
LABEL_31:
  if ( *(_DWORD *)(a1 + 680) )
    sub_6F83B5A7(a1, *(_DWORD *)(a1 + 680));
  result = a1;
  *(_DWORD *)(a1 + 680) = 0;
  if ( !v6 )
  {
    result = *(_DWORD *)(a1 + 284) & 0x20000000;
    if ( !result )
      sub_6F83979A(a1, (int)"unhandled critical chunk");
  }
  return result;
}
