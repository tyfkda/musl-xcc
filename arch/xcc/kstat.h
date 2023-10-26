struct kstat
{
	dev_t st_dev;
	ino_t st_ino;
	nlink_t st_nlink;
	
	mode_t st_mode;
	uid_t st_uid;
	gid_t st_gid;
	unsigned int __pad0;
	dev_t st_rdev;
	off_t st_size;
	blksize_t st_blksize;
	blkcnt_t st_blocks;
	
	long int st_atime_sec;
	long int st_atime_nsec;
	long int st_mtime_sec;
	long int st_mtime_nsec;
	long int st_ctime_sec;
	long int st_ctime_nsec;
	long int __unused[3];
};
