void __thiscall sub_6F8BAB30(void *this)
{
  void *v1; // ebx@1
  volatile signed __int32 **v2; // ecx@1

  v1 = this;
  v2 = (volatile signed __int32 **)((char *)this + 28);
  *(v2 - 7) = (volatile signed __int32 *)off_6FBB06B4;
  sub_6F938380(v2);
  j_free_1(v1);
}
