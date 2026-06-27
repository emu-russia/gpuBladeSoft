int __usercall sub_6F891480@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  unsigned int v3; // ebx@1
  int v4; // esi@1
  int v5; // ebp@1
  signed int v6; // edi@1
  signed int v7; // ecx@2
  unsigned int v8; // esi@8
  signed int v9; // [sp+0h] [bp-18h]@2
  int v10; // [sp+4h] [bp-14h]@2

  v3 = *(_WORD *)(a2 + 2);
  v4 = 4 * a3 + 4;
  *(_WORD *)(a2 + v4 + 2) = -1;
  v5 = 4 - (v3 < 1);
  v6 = v3 < 1 ? 138 : 7;
  if ( a3 >= 0 )
  {
    v7 = 0;
    v10 = a2 + v4;
    v9 = -1;
    while ( 1 )
    {
      ++v7;
      v8 = *(_WORD *)(a2 + 6);
      if ( v7 < v6 && v3 == v8 )
      {
        v3 = v9;
LABEL_6:
        a2 += 4;
        if ( a2 == v10 )
          return result;
        goto LABEL_7;
      }
      if ( v7 < v5 )
        break;
      if ( !v3 )
      {
        if ( v7 > 10 )
          ++*(_WORD *)(result + 2756);
        else
          ++*(_WORD *)(result + 2752);
LABEL_4:
        if ( v8 )
          goto LABEL_5;
        goto LABEL_15;
      }
      if ( v9 != v3 )
        ++*(_WORD *)(result + 4 * v3 + 2684);
      ++*(_WORD *)(result + 2748);
      if ( v8 )
      {
LABEL_5:
        v5 = (v3 != v8) + 3;
        v6 = (v3 != v8) + 6;
        v7 = 0;
        goto LABEL_6;
      }
LABEL_15:
      v7 = 0;
      a2 += 4;
      v5 = 3;
      v6 = 138;
      if ( a2 == v10 )
        return result;
LABEL_7:
      v9 = v3;
      v3 = v8;
    }
    *(_WORD *)(result + 4 * v3 + 2684) += v7;
    goto LABEL_4;
  }
  return result;
}
