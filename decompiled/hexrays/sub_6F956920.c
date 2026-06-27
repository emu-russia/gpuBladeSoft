void __thiscall sub_6F956920(_DWORD *this)
{
  _DWORD *v1; // ebx@1
  _DWORD *v2; // eax@1

  v1 = this;
  *this = off_6FBB0EA4;
  sub_6F954F50(this, 0);
  sub_6F955080((int)v1);
  v2 = (_DWORD *)v1[26];
  if ( v2 != v1 + 9 )
  {
    if ( v2 )
      j_j_free_1(v2);
    v1[26] = 0;
  }
  sub_6F938380((volatile signed __int32 **)v1 + 27);
}
