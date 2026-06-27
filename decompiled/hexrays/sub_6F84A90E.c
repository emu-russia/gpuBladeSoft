void *__cdecl sub_6F84A90E(int a1, size_t a2, signed int a3)
{
  void *v4; // [sp+1Ch] [bp-Ch]@1

  v4 = *(void **)(a1 + 696);
  if ( v4 && *(_DWORD *)(a1 + 700) < a2 )
  {
    *(_DWORD *)(a1 + 696) = 0;
    *(_DWORD *)(a1 + 696) = 0;
    *(_DWORD *)(a1 + 700) = 0;
    sub_6F83B5A7(a1, (int)v4);
    v4 = 0;
  }
  if ( !v4 )
  {
    v4 = sub_6F83B347(a1, a2);
    if ( v4 )
    {
      *(_DWORD *)(a1 + 696) = v4;
      *(_DWORD *)(a1 + 700) = a2;
    }
    else if ( a3 <= 1 )
    {
      if ( !a3 )
        sub_6F83979A(a1, (int)"insufficient memory to read chunk");
      sub_6F8397EC(a1, "insufficient memory to read chunk");
    }
  }
  return v4;
}
