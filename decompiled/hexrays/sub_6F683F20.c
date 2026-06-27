void __usercall sub_6F683F20(int a1@<ebp>)
{
  int v1; // edi@4
  int v2; // ecx@4
  int v3; // ebp@5
  int v4; // edx@7
  int v5; // esi@8
  int v6; // ecx@8
  signed int v7; // eax@8

  if ( dword_6FBB5078 )
  {
    if ( ((unk_6FBB979E >> 4) & 1) != dword_6FBB5074 )
    {
      sub_6F753BD0();
      sub_6F754DD0(a1);
    }
    v1 = dword_6FBB5070;
    v2 = dword_6FBB506C;
    if ( dword_6FBB5070 > 0 )
    {
      v3 = 0;
      do
      {
        if ( v2 > 0 )
        {
          v4 = 0;
          do
          {
            v5 = dword_6FBB5064;
            v6 = v4++ + v3 * v2;
            v7 = *(_WORD *)(dword_6FBB5068 + 2 * v6);
            v6 *= 3;
            *(_BYTE *)(dword_6FBB5064 + v6) = 8 * v7;
            *(_BYTE *)(v5 + v6 + 2) = (v7 >> 7) & 0xF8;
            *(_BYTE *)(v5 + v6 + 1) = (v7 >> 2) & 0xF8;
            v2 = dword_6FBB506C;
          }
          while ( dword_6FBB506C > v4 );
          v1 = dword_6FBB5070;
        }
        ++v3;
      }
      while ( v3 < v1 );
    }
    sub_6F753380(dword_6FBB5064, dword_6FBB5060, v2, v1);
    if ( sub_6F753450(dword_6FBB506C, dword_6FBB5070, dword_6FBB5060, 0) )
    {
      if ( dword_6FBB5078 )
        sub_6F753BD0();
    }
  }
}
