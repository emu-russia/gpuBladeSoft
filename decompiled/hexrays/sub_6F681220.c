int __usercall sub_6F681220@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edi@1
  int v4; // esi@1
  int v5; // ebx@1
  signed int v6; // ebp@4

  v3 = a3;
  v4 = a1;
  v5 = a2;
  dword_6FB48A3C = a2;
  if ( a2 )
  {
    sub_6F8A0B10();
    if ( (unsigned int)(v5 - 1) <= 1 )
    {
      if ( !sub_6F681020(v4, v5, v3) )
        goto LABEL_5;
      v6 = sub_6F8A1F20(v4, v5, v3);
      if ( v6 )
      {
        if ( v5 != 1 )
        {
          v6 = sub_6F8A1F30(v4, 2, v3);
          goto LABEL_6;
        }
        sub_6F8A06F0();
        v6 = sub_6F8A1F30(v4, 1, v3);
        if ( v6 )
          goto LABEL_6;
        sub_6F8A1F30(v4, 0, v3);
        sub_6F8A1F20(v4, 0, v3);
      }
      else if ( v5 != 1 )
      {
        goto LABEL_5;
      }
      sub_6F681020(v4, 0, v3);
      goto LABEL_6;
    }
    v6 = sub_6F8A1F30(v4, v5, v3);
    if ( v5 != 3 )
      goto LABEL_6;
  }
  else
  {
    if ( !dword_6FBB500C )
    {
LABEL_5:
      v6 = 0;
      goto LABEL_6;
    }
    sub_6F8A0B10();
    sub_6F8A1F30(v4, 0, v3);
  }
  v6 = sub_6F8A1F20(v4, v5, v3);
  if ( !sub_6F681020(v4, v5, v3) )
    goto LABEL_5;
LABEL_6:
  dword_6FB48A3C = -1;
  return v6;
}
